#!/usr/bin/env python3
# -*- coding: utf-8 -*-



import matplotlib.pyplot as plt
from resultsPlotTools import *
import argparse




#Arguments Parsing
parser = argparse.ArgumentParser()
parser.add_argument('-f', '--filenames', nargs='+',
                    help="base filename of data to generate", type=str)
parser.add_argument("-s", "--save", action='store_true',
                    help="Specify if the picture file should be saved.", default=False)

parser.add_argument('-d', '--display', 
                    action='store_true',
                    help="Shows the graph",
                    default= False)

args = parser.parse_args()

display=args.display
save=args.save
filenames=args.filenames

print(filenames)


plotXY_filename(plt, filenames)

if display:
    plt.show()
