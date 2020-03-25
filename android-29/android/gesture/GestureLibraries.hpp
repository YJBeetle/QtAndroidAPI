#pragma once

#ifndef ANDROID_GESTURE_GESTURELIBRARIES
#define ANDROID_GESTURE_GESTURELIBRARIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::gesture
{
	class GestureLibrary;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::gesture
{
	class GestureLibraries : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject fromPrivateFile(__jni_impl::android::content::Context arg0, jstring arg1);
		static QAndroidJniObject fromRawResource(__jni_impl::android::content::Context arg0, jint arg1);
		static QAndroidJniObject fromFile(jstring arg0);
		static QAndroidJniObject fromFile(__jni_impl::java::io::File arg0);
	};
} // namespace __jni_impl::android::gesture

#include "GestureLibrary.hpp"
#include "../content/Context.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::gesture
{
	// Fields
	
	// Constructors
	void GestureLibraries::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GestureLibraries",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject GestureLibraries::fromPrivateFile(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromPrivateFile",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject GestureLibraries::fromRawResource(__jni_impl::android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromRawResource",
			"(Landroid/content/Context;I)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject GestureLibraries::fromFile(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/lang/String;)Landroid/gesture/GestureLibrary;",
			arg0);
	}
	QAndroidJniObject GestureLibraries::fromFile(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.gesture.GestureLibraries",
			"fromFile",
			"(Ljava/io/File;)Landroid/gesture/GestureLibrary;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GestureLibraries : public __jni_impl::android::gesture::GestureLibraries
	{
	public:
		GestureLibraries(QAndroidJniObject obj) { __thiz = obj; }
		GestureLibraries()
		{
			__constructor();
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_GESTURELIBRARIES

