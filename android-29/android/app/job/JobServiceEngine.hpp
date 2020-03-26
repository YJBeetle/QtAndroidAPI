#pragma once

#ifndef ANDROID_APP_JOB_JOBSERVICEENGINE
#define ANDROID_APP_JOB_JOBSERVICEENGINE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Service;
}
namespace __jni_impl::android::app::job
{
	class JobParameters;
}

namespace __jni_impl::android::app::job
{
	class JobServiceEngine : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::app::Service arg0);
		
		// Methods
		void jobFinished(__jni_impl::android::app::job::JobParameters arg0, jboolean arg1);
		jboolean onStartJob(__jni_impl::android::app::job::JobParameters arg0);
		jboolean onStopJob(__jni_impl::android::app::job::JobParameters arg0);
		QAndroidJniObject getBinder();
	};
} // namespace __jni_impl::android::app::job

#include "../Service.hpp"
#include "JobParameters.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	
	// Constructors
	void JobServiceEngine::__constructor(__jni_impl::android::app::Service arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobServiceEngine",
			"(Landroid/app/Service;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void JobServiceEngine::jobFinished(__jni_impl::android::app::job::JobParameters arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean JobServiceEngine::onStartJob(__jni_impl::android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean JobServiceEngine::onStopJob(__jni_impl::android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JobServiceEngine::getBinder()
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobServiceEngine : public __jni_impl::android::app::job::JobServiceEngine
	{
	public:
		JobServiceEngine(QAndroidJniObject obj) { __thiz = obj; }
		JobServiceEngine(__jni_impl::android::app::Service arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app::job

#endif // ANDROID_APP_JOB_JOBSERVICEENGINE

