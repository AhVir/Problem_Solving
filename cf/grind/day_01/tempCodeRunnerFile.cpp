int tempSum = sum - val[i-1];
            tempSum += val[i];
            if(tempSum == val[i-1]) cnt++, sum += val[i];