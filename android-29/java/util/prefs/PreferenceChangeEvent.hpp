#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../EventObject.hpp"

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
	class Preferences;
}

namespace __jni_impl::java::util::prefs
{
	class PreferenceChangeEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::prefs::Preferences arg0, jstring arg1, jstring arg2);
		void __constructor(__jni_impl::java::util::prefs::Preferences arg0, const QString &arg1, const QString &arg2);
		
		// Methods
		jstring getKey();
		jstring getNewValue();
		QAndroidJniObject getNode();
	};
} // namespace __jni_impl::java::util::prefs

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./Preferences.hpp"

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
			arg2
		);
	}
	void PreferenceChangeEvent::__constructor(__jni_impl::java::util::prefs::Preferences arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.PreferenceChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jstring PreferenceChangeEvent::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PreferenceChangeEvent::getNewValue()
	{
		return __thiz.callObjectMethod(
			"getNewValue",
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

