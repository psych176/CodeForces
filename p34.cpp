We now explain the network chosen to model the real life IoT for healthcare (IoHT or MIoT) scenario. The system infrastructure has 3 main layers:
Edge layer:

Fog layer:

Cloud layer:

WORKING
Patient's medical data is collected by IoT health sensors and then aggregated by edge devices into medical messages. These messages are then transmitted to the internal fog center through the edge-fog gateway, which allows information to flow into compute fog nodes. Medical data is processed on fog nodes by specialized medical services and customized in such a way internal clients (doctors, nurses) can understand. It is then transmitted to remote cloud data centers through the fog-cloud gateway. Cloud then passes this to distant clients.
QUEUING MODEL
The figure below shows a model of queuing theory based on the system’s architecture.
The model has multiple entry points, corresponding to hospital rooms. Every hospital room is connected to an edge device which acts like a unique server and collects all the data following a (M/M/1/K) model and these edge devices work as the gateway between the edge-fog layer. Rooms are organized in floors and each floor has some distance from the fog layer leading to a delay called “delay edge-fog”.
In the fog layer, there is an entry and exit point. There are a maximum of ‘n’ servers with a maximum capacity of ‘k’ nodes and it follows First come First serve(FCFS) queuing discipline with inter-arrival and service time following Markovian distribution. So the Kendall notation is (M/M/n):(FCFS/K/infinity).
Next between the fog and cloud layers, there is the delay fog-cloud and the information finally goes to the cloud and allows remote clients to access information.
