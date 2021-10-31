#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuilder;
}
namespace java::time
{
	class Instant;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::nio::file::attribute
{
	class FileTime : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileTime(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(java::time::Instant arg0);
		static QAndroidJniObject from(jlong arg0, java::util::concurrent::TimeUnit arg1);
		static QAndroidJniObject fromMillis(jlong arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::file::attribute::FileTime arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jlong to(java::util::concurrent::TimeUnit arg0);
		QAndroidJniObject toInstant();
		jlong toMillis();
		jstring toString();
	};
} // namespace java::nio::file::attribute

