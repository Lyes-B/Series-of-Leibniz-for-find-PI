 /**
  * Series of Leibniz to find PI
  * Made for educational purpose
  *
  *  Copyright (c) 2015-2016 Lyes Belhadj
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *    http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double Pi = 0.0, denominateur = 1.0;
	int limite = 0;
	const int iteration = 100000000; //This is the number of iteration that will make/execute the program

	printf("Series of Leibniz to find PI - programming by Lyes Belhadj");
	printf("\n\nSearch");

	while(limite != iteration)
	{
		Pi += 4/denominateur;
		denominateur +=2;
		Pi -= 4/denominateur;
		denominateur +=2;

		limite++;

		if(limite % (iteration/10) == 0)
		{
			printf(".");
		}

	}

	printf("\n\nPi = %.64g\n", Pi); //Disp number PI

	return 0;
}

