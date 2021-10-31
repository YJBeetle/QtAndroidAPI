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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AclEntry(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject newBuilder();
		static QAndroidJniObject newBuilder(java::nio::file::attribute::AclEntry arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject flags();
		jint hashCode();
		QAndroidJniObject permissions();
		QAndroidJniObject principal();
		jstring toString();
		QAndroidJniObject type();
	};
} // namespace java::nio::file::attribute

