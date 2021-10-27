#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::app
{
	class DownloadManager_Query : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject setFilterById(jlongArray arg0);
		QAndroidJniObject setFilterByStatus(jint arg0);
	};
} // namespace __jni_impl::android::app


namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void DownloadManager_Query::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.DownloadManager$Query",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DownloadManager_Query::setFilterById(jlongArray arg0)
	{
		return __thiz.callObjectMethod(
			"setFilterById",
			"([J)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
	QAndroidJniObject DownloadManager_Query::setFilterByStatus(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFilterByStatus",
			"(I)Landroid/app/DownloadManager$Query;",
			arg0
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class DownloadManager_Query : public __jni_impl::android::app::DownloadManager_Query
	{
	public:
		DownloadManager_Query(QAndroidJniObject obj) { __thiz = obj; }
		DownloadManager_Query()
		{
			__constructor();
		}
	};
} // namespace android::app

