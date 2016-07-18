{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Feb 24 05:24:29 2016) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",65,52,700,500);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.61875,-18.15375,5.56875,163.3838);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(12);
   graph->SetName("");
   graph->SetTitle("#pi^{0} yield vs p_{T} distribution");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(33);
   graph->SetPoint(0,1.5,29.6394075);
   graph->SetPoint(1,1.7,56.23689127);
   graph->SetPoint(2,1.9,56.08918493);
   graph->SetPoint(3,2.1,65.00169127);
   graph->SetPoint(4,2.3,61.47276388);
   graph->SetPoint(5,2.5,64.40209181);
   graph->SetPoint(6,2.7,53.23004038);
   graph->SetPoint(7,2.9,48.13845069);
   graph->SetPoint(8,3.1,47.963401);
   graph->SetPoint(9,0,0);
   graph->SetPoint(10,3.8,66.183586);
   graph->SetPoint(11,4.5,132.0272988);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","#pi^{0} yield vs p_{T} distribution",100,0,4.95);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(145.23);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Yield");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   TPaveText *pt = new TPaveText(-0.09999999,0.9345,0.7,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#pi^{0} yield vs p_{T} distribution");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
