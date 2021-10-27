#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./Preferences.hpp"
#include "./PreferenceChangeEvent.hpp"

namespace java::util::prefs
{
	// Fields
	
	PreferenceChangeEvent::PreferenceChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PreferenceChangeEvent::PreferenceChangeEvent(java::util::prefs::Preferences &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.PreferenceChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	PreferenceChangeEvent::PreferenceChangeEvent(java::util::prefs::Preferences &arg0, const QString &arg1, const QString &arg2)
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
} // namespace java::util::prefs

