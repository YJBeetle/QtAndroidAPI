#pragma once

#include "../../__JniBaseClass.hpp"
#include "./PermissionCollection.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::security
{
	class Permission;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::security
{
	class Permissions : public java::security::PermissionCollection
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Permissions(const char *className, const char *sig, Ts...agv) : java::security::PermissionCollection(className, sig, std::forward<Ts>(agv)...) {}
		Permissions(QAndroidJniObject obj);
		
		// Constructors
		Permissions();
		
		// Methods
		void add(java::security::Permission arg0);
		QAndroidJniObject elements();
		jboolean implies(java::security::Permission arg0);
	};
} // namespace java::security

