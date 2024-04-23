--- ui/zenoedit/zenoapplication.h.orig	2024-04-23 10:57:01 UTC
+++ ui/zenoedit/zenoapplication.h
@@ -9,9 +9,9 @@
 
 class GraphsManagment;
 class ZenoMainWindow;
-#if defined(ZENO_MULTIPROCESS) && defined(ZENO_IPC_USE_TCP)
+//#if defined(ZENO_MULTIPROCESS) && defined(ZENO_IPC_USE_TCP)
 class ZTcpServer;
-#endif
+//#endif
 
 class ZenoApplication : public QApplication
 {
@@ -26,9 +26,9 @@ class ZenoApplication : public QApplication (public)
 	QWidget* getWindow(const QString& objName);
     std::shared_ptr<ZCacheMgr> cacheMgr() const;
     std::shared_ptr<ProcessClipboard> procClipboard() const;
-#if defined(ZENO_MULTIPROCESS) && defined(ZENO_IPC_USE_TCP)
+//#if defined(ZENO_MULTIPROCESS) && defined(ZENO_IPC_USE_TCP)
     ZTcpServer* getServer();
-#endif
+//#endif
     QStandardItemModel* logModel() const;
     bool isUIApplication() const { return m_bUIApp; }
 
@@ -39,9 +39,9 @@ private slots: (private)
     QString readQss(const QString& qssPath);
     void initMetaTypes();
 
-#if defined(ZENO_MULTIPROCESS) && defined(ZENO_IPC_USE_TCP)
+//#if defined(ZENO_MULTIPROCESS) && defined(ZENO_IPC_USE_TCP)
     ZTcpServer* m_server;
-#endif
+//#endif
     std::shared_ptr<ZWidgetErrStream> m_spUILogStream;
     std::shared_ptr<ZCacheMgr> m_spCacheMgr;
     std::shared_ptr<ProcessClipboard> m_spProcClipboard;
