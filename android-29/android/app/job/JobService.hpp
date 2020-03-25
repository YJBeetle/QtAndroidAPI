#pragma once

#ifndef ANDROID_APP_JOB_JOBSERVICE
#define ANDROID_APP_JOB_JOBSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::app::job
{
	class JobParameters;
}

namespace __jni_impl::android::app::job
{
	class JobService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject PERMISSION_BIND();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void jobFinished(__jni_impl::android::app::job::JobParameters arg0, jboolean arg1);
		jboolean onStartJob(__jni_impl::android::app::job::JobParameters arg0);
		jboolean onStopJob(__jni_impl::android::app::job::JobParameters arg0);
	};
} // namespace __jni_impl::android::app::job

#include "../../content/Intent.hpp"
#include "JobParameters.hpp"

namespace __jni_impl::android::app::job
{
	// Fields
	QAndroidJniObject JobService::PERMISSION_BIND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.job.JobService",
			"PERMISSION_BIND",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void JobService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.job.JobService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject JobService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void JobService::jobFinished(__jni_impl::android::app::job::JobParameters arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"jobFinished",
			"(Landroid/app/job/JobParameters;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean JobService::onStartJob(__jni_impl::android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStartJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object());
	}
	jboolean JobService::onStopJob(__jni_impl::android::app::job::JobParameters arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onStopJob",
			"(Landroid/app/job/JobParameters;)Z",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app::job

namespace android::app::job
{
	class JobService : public __jni_impl::android::app::job::JobService
	{
	public:
		JobService(QAndroidJniObject obj) { __thiz = obj; }
		JobService()
		{
			__constructor();
		}
	};
} // namespace android::app::job

#endif // ANDROID_APP_JOB_JOBSERVICE

