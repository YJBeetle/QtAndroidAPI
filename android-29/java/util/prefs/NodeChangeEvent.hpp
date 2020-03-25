#pragma once

#ifndef JAVA_UTIL_PREFS_NODECHANGEEVENT
#define JAVA_UTIL_PREFS_NODECHANGEEVENT

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
	class NodeChangeEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::prefs::Preferences arg0, __jni_impl::java::util::prefs::Preferences arg1);
		
		// Methods
		QAndroidJniObject getParent();
		QAndroidJniObject getChild();
	};
} // namespace __jni_impl::java::util::prefs

#include "Preferences.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::util::prefs
{
	// Fields
	
	// Constructors
	void NodeChangeEvent::__constructor(__jni_impl::java::util::prefs::Preferences arg0, __jni_impl::java::util::prefs::Preferences arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.prefs.NodeChangeEvent",
			"(Ljava/util/prefs/Preferences;Ljava/util/prefs/Preferences;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject NodeChangeEvent::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/util/prefs/Preferences;");
	}
	QAndroidJniObject NodeChangeEvent::getChild()
	{
		return __thiz.callObjectMethod(
			"getChild",
			"()Ljava/util/prefs/Preferences;");
	}
} // namespace __jni_impl::java::util::prefs

namespace java::util::prefs
{
	class NodeChangeEvent : public __jni_impl::java::util::prefs::NodeChangeEvent
	{
	public:
		NodeChangeEvent(QAndroidJniObject obj) { __thiz = obj; }
		NodeChangeEvent(__jni_impl::java::util::prefs::Preferences arg0, __jni_impl::java::util::prefs::Preferences arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::prefs

#endif // JAVA_UTIL_PREFS_NODECHANGEEVENT

