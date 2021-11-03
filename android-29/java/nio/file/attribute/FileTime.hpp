#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;
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
	class FileTime : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileTime(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileTime(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::FileTime from(java::time::Instant arg0);
		static java::nio::file::attribute::FileTime from(jlong arg0, java::util::concurrent::TimeUnit arg1);
		static java::nio::file::attribute::FileTime fromMillis(jlong arg0);
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::file::attribute::FileTime arg0) const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jlong to(java::util::concurrent::TimeUnit arg0) const;
		java::time::Instant toInstant() const;
		jlong toMillis() const;
		JString toString() const;
	};
} // namespace java::nio::file::attribute

