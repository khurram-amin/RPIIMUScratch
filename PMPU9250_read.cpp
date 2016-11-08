#include "PMPU9250.h"
#include <wiringPi.h>
#include <iostream>

using namespace std;
int main()
{
	short *data = new short[3];
	float *data2 = new float[3];

	
	MPU9250 mpu9250;
	
	mpu9250.initMPU9250();
	delay(10);
	mpu9250.reIntAK8963();
	cout << "Who AM I> AK8963 ?: " <<  (int) mpu9250.readByte(AK8963_ADDRESS, WHO_AM_I_AK8963) << endl;
	//mpu9250.initAK8963(data2);
	cout << "Who AM I> AK8963 ?: " <<  (int) mpu9250.readByte(AK8963_ADDRESS, WHO_AM_I_AK8963) << endl;
	//cout << "WHO AM 2?: " <<   std::hex <<   (char) mpu9250.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250) << endl;
	//cout << "WHO AM 2 Mag?: " <<  (char) mpu9250.readByte(AK8963_ADDRESS, WHO_AM_I_AK8963) << endl;

	//delay(10);
	//mpu9250.writeByte(AK8963_ADDRESS, AK8963_CNTL, 0x01);
	//delay(10);
	//mpu9250.initAK8963(data2);
	//delay(10);
	//mpu9250.writeByte(AK8963_ADDRESS, AK8963_CNTL, 0x01);

	//cout << "WHO AM 3?: " <<   std::hex <<   (char) mpu9250.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250) << endl;
	//cout << "WHO AM 3 Mag?: " <<  (char) mpu9250.readByte(AK8963_ADDRESS, WHO_AM_I_AK8963) << endl;

	delay(10);

	//cout << "WHO AM 3*?: " <<   std::hex <<   (char) mpu9250.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250) << endl;
	//cout << "WHO AM 3* Mag?: " <<  (char) mpu9250.readByte(AK8963_ADDRESS, WHO_AM_I_AK8963) << endl;
			
	while(1)
	{
//		cout<<"reading data ..."<<endl;
		for (int i=0; i<3; i++)
		{
			data[i] = 0;
		}
		// mpu9250.readAccelData(data);
		// cout<<"T: "<<mpu9250.readTempInC()<<endl;
		// for(int i=0; i<3; i++)
		// {
		// 	cout<<i<<": "<<1.0f*data[i]*mpu9250.getAres()<<endl;
		// }
		// // cout<<endl;
		// for (int i=0; i<3; i++)
		// {
		// 	data[i] = 0;
		// }

		// mpu9250.readGyroData(data);
		// for(int i=0; i<3; i++)
		// {
		// 	cout<<i<<": "<<1.0f*data[i]*mpu9250.getGres()<<endl;
		// }
		// // cout<<endl;
		// for (int i=0; i<3; i++)
		// {
		// 	data[i] = 0;
		// }
		cout << "WHO AM 4?: " << (unsigned int) mpu9250.readByte(MPU9250_ADDRESS, WHO_AM_I_MPU9250) << endl;
		cout << "WHO AM 4 Mag?: " << (unsigned int) mpu9250.readByte(AK8963_ADDRESS, WHO_AM_I_AK8963) << endl;
	
		mpu9250.readMagData(data);
		for(int i=0; i<3; i++)
		{
			cout<<i<<": "<<1.0f*data[i]<<endl;
		}

		cout<<endl<<endl<<endl;
		delay(10);
	}
}