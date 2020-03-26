#pragma once

#ifndef ANDROID_SYSTEM_STRUCTPOLLFD
#define ANDROID_SYSTEM_STRUCTPOLLFD

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}

namespace __jni_impl::android::system
{
	class StructPollfd : public __JniBaseClass
	{
	public:
		// Fields
		jshort events();
		QAndroidJniObject fd();
		jshort revents();
		jobject userData();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
	};
} // namespace __jni_impl::android::system

#include "../../java/io/FileDescriptor.hpp"

namespace __jni_impl::android::system
{
	// Fields
	jshort StructPollfd::events()
	{
		return __thiz.getField<jshort>(
			"events"
		);
	}
	QAndroidJniObject StructPollfd::fd()
	{
		return __thiz.getObjectField(
			"fd",
			"Ljava/io/FileDescriptor;"
		);
	}
	jshort StructPollfd::revents()
	{
		return __thiz.getField<jshort>(
			"revents"
		);
	}
	jobject StructPollfd::userData()
	{
		return __thiz.getObjectField(
			"userData",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void StructPollfd::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.system.StructPollfd",
			"()V");
	}
	
	// Methods
	jstring StructPollfd::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class StructPollfd : public __jni_impl::android::system::StructPollfd
	{
	public:
		StructPollfd(QAndroidJniObject obj) { __thiz = obj; }
		StructPollfd()
		{
			__constructor();
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_STRUCTPOLLFD

