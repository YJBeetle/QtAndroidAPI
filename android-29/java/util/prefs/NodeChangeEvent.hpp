#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../EventObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util::prefs
{
	class Preferences;
}

namespace java::util::prefs
{
	class NodeChangeEvent : public java::util::EventObject
	{
	public:
		// Fields
		
		NodeChangeEvent(QAndroidJniObject obj);
		// Constructors
		NodeChangeEvent(java::util::prefs::Preferences &arg0, java::util::prefs::Preferences &arg1);
		NodeChangeEvent() = default;
		
		// Methods
		QAndroidJniObject getChild();
		QAndroidJniObject getParent();
	};
} // namespace java::util::prefs

