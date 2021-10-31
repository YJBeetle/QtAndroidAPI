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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NodeChangeEvent(const char *className, const char *sig, Ts...agv) : java::util::EventObject(className, sig, std::forward<Ts>(agv)...) {}
		NodeChangeEvent(QAndroidJniObject obj);
		
		// Constructors
		NodeChangeEvent(java::util::prefs::Preferences arg0, java::util::prefs::Preferences arg1);
		
		// Methods
		java::util::prefs::Preferences getChild();
		java::util::prefs::Preferences getParent();
	};
} // namespace java::util::prefs
