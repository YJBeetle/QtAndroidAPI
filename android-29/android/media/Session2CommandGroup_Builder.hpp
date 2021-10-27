#pragma once

#ifndef ANDROID_MEDIA_SESSION2COMMANDGROUP_BUILDER
#define ANDROID_MEDIA_SESSION2COMMANDGROUP_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class Session2Command;
}
namespace __jni_impl::android::media
{
	class Session2CommandGroup;
}

namespace __jni_impl::android::media
{
	class Session2CommandGroup_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::Session2CommandGroup arg0);
		
		// Methods
		QAndroidJniObject addCommand(__jni_impl::android::media::Session2Command arg0);
		QAndroidJniObject build();
		QAndroidJniObject removeCommand(__jni_impl::android::media::Session2Command arg0);
	};
} // namespace __jni_impl::android::media

#include "Session2Command.hpp"
#include "Session2CommandGroup.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void Session2CommandGroup_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2CommandGroup$Builder",
			"()V"
		);
	}
	void Session2CommandGroup_Builder::__constructor(__jni_impl::android::media::Session2CommandGroup arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2CommandGroup$Builder",
			"(Landroid/media/Session2CommandGroup;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Session2CommandGroup_Builder::addCommand(__jni_impl::android::media::Session2Command arg0)
	{
		return __thiz.callObjectMethod(
			"addCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Session2CommandGroup_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/media/Session2CommandGroup;"
		);
	}
	QAndroidJniObject Session2CommandGroup_Builder::removeCommand(__jni_impl::android::media::Session2Command arg0)
	{
		return __thiz.callObjectMethod(
			"removeCommand",
			"(Landroid/media/Session2Command;)Landroid/media/Session2CommandGroup$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Session2CommandGroup_Builder : public __jni_impl::android::media::Session2CommandGroup_Builder
	{
	public:
		Session2CommandGroup_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Session2CommandGroup_Builder()
		{
			__constructor();
		}
		Session2CommandGroup_Builder(__jni_impl::android::media::Session2CommandGroup arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SESSION2COMMANDGROUP_BUILDER

