#pragma once

#ifndef JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT
#define JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT

#include "../../../__JniBaseClass.hpp"
#include "../EventObject.hpp"

namespace __jni_impl::java::util::prefs
{
	class Preferences;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util::prefs
{
	class PreferenceChangeEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::prefs::Preferences arg0, jstring arg1, jstring arg2);
		
		// Methods
		jstring getKey();
		QAndroidJniObject getNode();
		jstring getNewValue();
	};
} // namespace __jni_impl::java::util::prefs

#include "Preferences.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util::prefs
{
	// Fields
	
	// Constructors
	void PreferenceChangeEvent::__constructor(__jni_impl::java::util::prefs::Preferences arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.PreferenceChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	
	// Methods
	jstring PreferenceChangeEvent::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PreferenceChangeEvent::getNode()
	{
		return __thiz.callObjectMethod(
			"getNode",
			"()Ljava/util/prefs/Preferences;"
		);
	}
	jstring PreferenceChangeEvent::getNewValue()
	{
		return __thiz.callObjectMethod(
			"getNewValue",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::prefs

namespace java::util::prefs
{
	class PreferenceChangeEvent : public __jni_impl::java::util::prefs::PreferenceChangeEvent
	{
	public:
		PreferenceChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
		PreferenceChangeEvent(__jni_impl::java::util::prefs::Preferences arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util::prefs

#endif // JAVA_UTIL_PREFS_PREFERENCECHANGEEVENT

