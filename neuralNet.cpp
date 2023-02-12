#include<iostream>
#include<vector>
using namespace std;

class Neuron
{
};


typedef vector<Neuron> Layer;


class Net
{
public:
	Net(const vector<unsigned>& topology)
	{
		unsigned numLayers = topology.size();
		for (unsigned layerNum = 0; layerNum < numLayers; layerNum++)
		{
			m_layers.push_back(Layer());

			for (unsigned neuronNum = 0; neuronNum <= topology[layerNum]; neuronNum++)
			{
				m_layers.back().push_back(Neuron());
				cout << "Neuron made!!" << endl;
			}
		}
	}
	void feedForward(const vector<double>& inputVals);
	void backProp(const vector<double>& targetVals);
	void getResults(const vector<double>& resultVals);



private:
	vector<Layer> m_layers;

};


int main()
{

	vector<unsigned> topology;
	topology.push_back(9);
	topology.push_back(8);
	topology.push_back(7);
	topology.push_back(6);
	topology.push_back(5);
	topology.push_back(9);
	topology.push_back(4);
	topology.push_back(3);
	topology.push_back(2);
	topology.push_back(1);
	Net myNet(topology);

	//vector<double> inputVals;
	//myNet.feedForward(inputVals);

	//vector<double> targetVals;
	//myNet.backProp(targetVals);

	//vector<double> getResults;
	//myNet.getResults(getResults);



	return 0;
}
