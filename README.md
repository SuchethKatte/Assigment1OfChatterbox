## Documentation

---

I used a **map** to store the **(key, value) pair**, then this (key, value) pair must be altered as the user demands.

---

## Way of connecting the different servers

### 1. Star Topology

This is the first design which came to my mind. We take multiple servers, then connect them to the main server. We'll name the multiple servers as **Workers**, and the main server as **Load**.

If a client wishes to connect to this network, it must first connect itself to **Load**, then the **Load** will assign a random running server by itself. The client disconnects from the **Load**, and connects to the assigned **Worker**.

For any `/SET` or `/DELETE`, other **Workers** must also be notified, therefore the assigned **Worker** notifies the **Load**, **Load** notifies the other **Workers**.

**Issues:**

a. According to problem statement, any server could be down, so what if the **Load** is down.
b. **Load** requires two ports, one for **Workers**, one for Client. The implementation was not feasible, and I couldn't understand how to do it.

---

### 2. Mesh

Connect all the servers to each other.

#### a. Static Mesh:

Connect the servers to each other, knowing their **IP's** and **Ports** in a single command by passing it as **Command Line Argument**, with multiple ports being the part of Argument. (Like how Prabhav did)

#### b. Dynamic Mesh:

Similar to star, I will need a **Load** like class, but only to store the **IP's** of all the other servers. The **Workers** will first connect to the **Load**, and fetch the **IP's** of other **Workers** and get connected. **Mesh** topology will be formed.

(Not done yet, will do it)

(I will do this once I figure out)