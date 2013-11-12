{
	"patcher" : 	{
		"fileversion" : 1,
		"appversion" : 		{
			"major" : 5,
			"minor" : 1,
			"revision" : 9
		}
,
		"rect" : [ -26.0, 401.0, 768.0, 249.0 ],
		"bglocked" : 0,
		"defrect" : [ -26.0, 401.0, 768.0, 249.0 ],
		"openrect" : [ 0.0, 0.0, 0.0, 0.0 ],
		"openinpresentation" : 0,
		"default_fontsize" : 12.0,
		"default_fontface" : 0,
		"default_fontname" : "Arial",
		"gridonopen" : 0,
		"gridsize" : [ 15.0, 15.0 ],
		"gridsnaponopen" : 0,
		"toolbarvisible" : 1,
		"boxanimatetime" : 200,
		"imprint" : 0,
		"enablehscroll" : 1,
		"enablevscroll" : 1,
		"devicewidth" : 0.0,
		"boxes" : [ 			{
				"box" : 				{
					"maxclass" : "flonum",
					"fontsize" : 12.0,
					"numinlets" : 1,
					"patching_rect" : [ 637.0, 63.0, 50.0, 20.0 ],
					"numoutlets" : 2,
					"id" : "obj-24",
					"fontname" : "Arial",
					"outlettype" : [ "float", "bang" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "/rotation/z $1",
					"fontsize" : 12.0,
					"numinlets" : 2,
					"patching_rect" : [ 637.0, 105.0, 80.0, 18.0 ],
					"numoutlets" : 1,
					"id" : "obj-25",
					"fontname" : "Arial",
					"outlettype" : [ "" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "flonum",
					"fontsize" : 12.0,
					"presentation_rect" : [ 287.0, 96.0, 0.0, 0.0 ],
					"numinlets" : 1,
					"patching_rect" : [ 544.0, 63.0, 50.0, 20.0 ],
					"numoutlets" : 2,
					"id" : "obj-22",
					"fontname" : "Arial",
					"outlettype" : [ "float", "bang" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "/rotation/y $1",
					"fontsize" : 12.0,
					"presentation_rect" : [ 282.0, 138.0, 0.0, 0.0 ],
					"numinlets" : 2,
					"patching_rect" : [ 544.0, 105.0, 80.0, 18.0 ],
					"numoutlets" : 1,
					"id" : "obj-23",
					"fontname" : "Arial",
					"outlettype" : [ "" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "flonum",
					"fontsize" : 12.0,
					"presentation_rect" : [ 194.0, 96.0, 0.0, 0.0 ],
					"numinlets" : 1,
					"patching_rect" : [ 451.0, 63.0, 50.0, 20.0 ],
					"numoutlets" : 2,
					"id" : "obj-20",
					"fontname" : "Arial",
					"outlettype" : [ "float", "bang" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "/rotation/x $1",
					"fontsize" : 12.0,
					"presentation_rect" : [ 189.0, 138.0, 0.0, 0.0 ],
					"numinlets" : 2,
					"patching_rect" : [ 451.0, 105.0, 80.0, 18.0 ],
					"numoutlets" : 1,
					"id" : "obj-21",
					"fontname" : "Arial",
					"outlettype" : [ "" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "flonum",
					"fontsize" : 12.0,
					"numinlets" : 1,
					"patching_rect" : [ 314.0, 62.0, 50.0, 20.0 ],
					"numoutlets" : 2,
					"id" : "obj-9",
					"fontname" : "Arial",
					"outlettype" : [ "float", "bang" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "/rotationVelocity/z $1",
					"fontsize" : 12.0,
					"numinlets" : 2,
					"patching_rect" : [ 314.0, 104.0, 121.0, 18.0 ],
					"numoutlets" : 1,
					"id" : "obj-10",
					"fontname" : "Arial",
					"outlettype" : [ "" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "flonum",
					"fontsize" : 12.0,
					"presentation_rect" : [ 337.0, 148.0, 0.0, 0.0 ],
					"numinlets" : 1,
					"patching_rect" : [ 189.0, 62.0, 50.0, 20.0 ],
					"numoutlets" : 2,
					"id" : "obj-7",
					"fontname" : "Arial",
					"outlettype" : [ "float", "bang" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "/rotationVelocity/y $1",
					"fontsize" : 12.0,
					"presentation_rect" : [ 332.0, 190.0, 0.0, 0.0 ],
					"numinlets" : 2,
					"patching_rect" : [ 189.0, 104.0, 121.0, 18.0 ],
					"numoutlets" : 1,
					"id" : "obj-8",
					"fontname" : "Arial",
					"outlettype" : [ "" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "flonum",
					"fontsize" : 12.0,
					"numinlets" : 1,
					"patching_rect" : [ 61.0, 62.0, 50.0, 20.0 ],
					"numoutlets" : 2,
					"id" : "obj-6",
					"fontname" : "Arial",
					"outlettype" : [ "float", "bang" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "message",
					"text" : "/rotationVelocity/x $1",
					"fontsize" : 12.0,
					"numinlets" : 2,
					"patching_rect" : [ 61.0, 104.0, 121.0, 18.0 ],
					"numoutlets" : 1,
					"id" : "obj-4",
					"fontname" : "Arial",
					"outlettype" : [ "" ]
				}

			}
, 			{
				"box" : 				{
					"maxclass" : "newobj",
					"text" : "udpsend localhost 12345",
					"fontsize" : 12.0,
					"numinlets" : 1,
					"patching_rect" : [ 143.0, 172.0, 144.0, 20.0 ],
					"numoutlets" : 0,
					"id" : "obj-1",
					"fontname" : "Arial"
				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"source" : [ "obj-21", 0 ],
					"destination" : [ "obj-1", 0 ],
					"hidden" : 0,
					"midpoints" : [ 460.5, 146.5, 152.5, 146.5 ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-23", 0 ],
					"destination" : [ "obj-1", 0 ],
					"hidden" : 0,
					"midpoints" : [ 553.5, 146.5, 152.5, 146.5 ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-25", 0 ],
					"destination" : [ "obj-1", 0 ],
					"hidden" : 0,
					"midpoints" : [ 646.5, 146.5, 152.5, 146.5 ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-24", 0 ],
					"destination" : [ "obj-25", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-22", 0 ],
					"destination" : [ "obj-23", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-20", 0 ],
					"destination" : [ "obj-21", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-10", 0 ],
					"destination" : [ "obj-1", 0 ],
					"hidden" : 0,
					"midpoints" : [ 323.5, 146.5, 152.5, 146.5 ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-8", 0 ],
					"destination" : [ "obj-1", 0 ],
					"hidden" : 0,
					"midpoints" : [ 198.5, 146.5, 152.5, 146.5 ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-9", 0 ],
					"destination" : [ "obj-10", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-7", 0 ],
					"destination" : [ "obj-8", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-6", 0 ],
					"destination" : [ "obj-4", 0 ],
					"hidden" : 0,
					"midpoints" : [  ]
				}

			}
, 			{
				"patchline" : 				{
					"source" : [ "obj-4", 0 ],
					"destination" : [ "obj-1", 0 ],
					"hidden" : 0,
					"midpoints" : [ 70.5, 146.5, 152.5, 146.5 ]
				}

			}
 ]
	}

}
