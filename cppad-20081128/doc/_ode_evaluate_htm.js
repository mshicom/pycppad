var list_across0 = [
'_contents.htm',
'_reference.htm',
'_index.htm',
'_search.htm',
'_external.htm'
];
var list_up0 = [
'cppad.htm',
'appendix.htm',
'speed.htm',
'speed_utility.htm',
'ode_evaluate.htm'
];
var list_down3 = [
'faq.htm',
'speed.htm',
'theory.htm',
'glossary.htm',
'bib.htm',
'bugs.htm',
'wishlist.htm',
'whats_new.htm',
'include_deprecated.htm',
'license.htm'
];
var list_down2 = [
'speed_main.htm',
'speed_utility.htm',
'speed_double.htm',
'speed_adolc.htm',
'speed_cppad.htm',
'speed_fadbad.htm',
'speed_sacado.htm'
];
var list_down1 = [
'uniform_01.htm',
'det_of_minor.htm',
'det_by_minor.htm',
'det_by_lu.htm',
'det_33.htm',
'det_grad_33.htm',
'ode_evaluate.htm',
'sparse_evaluate.htm'
];
var list_down0 = [
'ode_evaluate.cpp.htm',
'ode_evaluate.hpp.htm'
];
var list_current0 = [
'ode_evaluate.htm#Syntax',
'ode_evaluate.htm#Purpose',
'ode_evaluate.htm#Inclusion',
'ode_evaluate.htm#Float',
'ode_evaluate.htm#Float.Operation Sequence',
'ode_evaluate.htm#x',
'ode_evaluate.htm#m',
'ode_evaluate.htm#m = 1',
'ode_evaluate.htm#fm',
'ode_evaluate.htm#fm.Function',
'ode_evaluate.htm#fm.Gradient',
'ode_evaluate.htm#Example',
'ode_evaluate.htm#Source Code'
];
function choose_across0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_across0[index-1];
}
function choose_up0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_up0[index-1];
}
function choose_down3(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down3[index-1];
}
function choose_down2(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down2[index-1];
}
function choose_down1(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down1[index-1];
}
function choose_down0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down0[index-1];
}
function choose_current0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_current0[index-1];
}
