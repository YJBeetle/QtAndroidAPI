#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::nio::file::attribute
{
	class AclEntry_Builder;
}
namespace java::nio::file::attribute
{
	class AclEntryType;
}

namespace java::nio::file::attribute
{
	class AclEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AclEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AclEntry(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntry_Builder newBuilder();
		static java::nio::file::attribute::AclEntry_Builder newBuilder(java::nio::file::attribute::AclEntry arg0);
		jboolean equals(jobject arg0);
		__JniBaseClass flags();
		jint hashCode();
		__JniBaseClass permissions();
		__JniBaseClass principal();
		jstring toString();
		java::nio::file::attribute::AclEntryType type();
	};
} // namespace java::nio::file::attribute

