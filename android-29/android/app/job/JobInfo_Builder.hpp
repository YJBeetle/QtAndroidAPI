#pragma once

#ifndef ANDROID_APP_JOB_JOBINFO_BUILDER
#define ANDROID_APP_JOB_JOBINFO_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::app::job
{
	class JobInfo;
}
namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::net
{
	class NetworkRequest;
}
namespace __jni_impl::android::app::job
{
	class JobInfo_TriggerContentUri;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}

namespace __jni_impl::android::app::job
{
	class JobInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::android::content::ComponentName arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setClipData(__jni_impl::android::content::ClipData arg0, jint arg1);
		QAndroidJniObject setTransientExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setRequiredNetworkType(jint arg0);
		QAndroidJniObject setRequiredNetwork(__jni_impl::android::net::NetworkRequest arg0);
		QAndroidJniObject setEstimatedNetworkBytes(jlong arg0, jlong arg1);
		QAndroidJniObject setRequiresBatteryNotLow(jboolean arg0);
		QAndroidJniObject setRequiresStorageNotLow(jboolean arg0);
		QAndroidJniObject addTriggerContentUri(__jni_impl::android::app::job::JobInfo_TriggerContentUri arg0);
		QAndroidJniObject setTriggerContentUpdateDelay(jlong arg0);
		QAndroidJniObject setTriggerContentMaxDelay(jlong arg0);
		QAndroidJniObject setPeriodic(jlong arg0);
		QAndroidJniObject setPeriodic(jlong arg0, jlong arg1);
		QAndroidJniObject setMinimumLatency(jlong arg0);
		QAndroidJniObject setOverrideDeadline(jlong arg0);
		QAndroidJniObject setBackoffCriteria(jlong arg0, jint arg1);
		QAndroidJniObject setImportantWhileForeground(jboolean arg0);
		QAndroidJniObject setPrefetch(jboolean arg0);
		QAndroidJniObject setPersisted(jboolean arg0);
		QAndroidJniObject setRequiresCharging(jboolean arg0);
		QAndroidJniObject setRequiresDeviceIdle(jboolean arg0);
		QAndroidJniObject setExtras(__jni_impl::android::os::PersistableBundle arg0);
	};
} // namespace __jni_impl::android::app::job

#include "../../content/ComponentName.hpp"
#include "JobInfo.hpp"
#include "../../content/ClipData.hpp"
#include "../../os/Bundle.hpp"
#include "../../net/NetworkRequest.hpp"
#include "JobInfo_TriggerContentUri.hpp"
#include "../../os/PersistableBundle.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	
	// Constructors
	void JobInfo_Builder::__constructor(jint arg0, __jni_impl::android::content::ComponentName arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobInfo$Builder",
			"(ILandroid/content/ComponentName;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject JobInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/job/JobInfo;");
	}
	QAndroidJniObject JobInfo_Builder::setClipData(__jni_impl::android::content::ClipData arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setClipData",
			"(Landroid/content/ClipData;I)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject JobInfo_Builder::setTransientExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setTransientExtras",
			"(Landroid/os/Bundle;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject JobInfo_Builder::setRequiredNetworkType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiredNetworkType",
			"(I)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setRequiredNetwork(__jni_impl::android::net::NetworkRequest arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiredNetwork",
			"(Landroid/net/NetworkRequest;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject JobInfo_Builder::setEstimatedNetworkBytes(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setEstimatedNetworkBytes",
			"(JJ)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresBatteryNotLow(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresBatteryNotLow",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresStorageNotLow(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresStorageNotLow",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::addTriggerContentUri(__jni_impl::android::app::job::JobInfo_TriggerContentUri arg0)
	{
		return __thiz.callObjectMethod(
			"addTriggerContentUri",
			"(Landroid/app/job/JobInfo$TriggerContentUri;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject JobInfo_Builder::setTriggerContentUpdateDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setTriggerContentUpdateDelay",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setTriggerContentMaxDelay(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setTriggerContentMaxDelay",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setPeriodic(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setPeriodic",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setPeriodic(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setPeriodic",
			"(JJ)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject JobInfo_Builder::setMinimumLatency(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setMinimumLatency",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setOverrideDeadline(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setOverrideDeadline",
			"(J)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setBackoffCriteria(jlong arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setBackoffCriteria",
			"(JI)Landroid/app/job/JobInfo$Builder;",
			arg0,
			arg1);
	}
	QAndroidJniObject JobInfo_Builder::setImportantWhileForeground(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setImportantWhileForeground",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setPrefetch(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setPrefetch",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setPersisted(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setPersisted",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresCharging(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresCharging",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setRequiresDeviceIdle(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setRequiresDeviceIdle",
			"(Z)Landroid/app/job/JobInfo$Builder;",
			arg0);
	}
	QAndroidJniObject JobInfo_Builder::setExtras(__jni_impl::android::os::PersistableBundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/PersistableBundle;)Landroid/app/job/JobInfo$Builder;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobInfo_Builder : public __jni_impl::android::app::job::JobInfo_Builder
	{
	public:
		JobInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		JobInfo_Builder(jint arg0, __jni_impl::android::content::ComponentName arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::job

#endif // ANDROID_APP_JOB_JOBINFO_BUILDER

