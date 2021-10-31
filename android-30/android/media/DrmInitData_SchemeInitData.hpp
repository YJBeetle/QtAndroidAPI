#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class UUID;
}

namespace android::media
{
	class DrmInitData_SchemeInitData : public __JniBaseClass
	{
	public:
		// Fields
		static java::util::UUID UUID_NIL();
		jbyteArray data();
		jstring mimeType();
		java::util::UUID uuid();
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmInitData_SchemeInitData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmInitData_SchemeInitData(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::media

