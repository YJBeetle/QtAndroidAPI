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
		
		AclEntry(QAndroidJniObject obj);
		// Constructors
		AclEntry() = default;
		
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

