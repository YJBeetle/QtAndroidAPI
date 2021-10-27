#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class EventLogTags_Description : public __JniBaseClass
	{
	public:
		// Fields
		jstring mName();
		jint mTag();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jstring EventLogTags_Description::mName()
	{
		return __thiz.getObjectField(
			"mName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint EventLogTags_Description::mTag()
	{
		return __thiz.getField<jint>(
			"mTag"
		);
	}
	
	// Constructors
	void EventLogTags_Description::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.EventLogTags$Description",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::util

namespace android::util
{
	class EventLogTags_Description : public __jni_impl::android::util::EventLogTags_Description
	{
	public:
		EventLogTags_Description(QAndroidJniObject obj) { __thiz = obj; }
		EventLogTags_Description()
		{
			__constructor();
		}
	};
} // namespace android::util

