#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;
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
	class AclEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AclEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AclEntry(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntry_Builder newBuilder();
		static java::nio::file::attribute::AclEntry_Builder newBuilder(java::nio::file::attribute::AclEntry arg0);
		jboolean equals(JObject arg0);
		JObject flags();
		jint hashCode();
		JObject permissions();
		JObject principal();
		JString toString();
		java::nio::file::attribute::AclEntryType type();
	};
} // namespace java::nio::file::attribute

