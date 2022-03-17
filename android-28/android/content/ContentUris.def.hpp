#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::net
{
	class Uri_Builder;
}

namespace android::content
{
	class ContentUris : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentUris(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentUris(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContentUris();
		
		// Methods
		static android::net::Uri_Builder appendId(android::net::Uri_Builder arg0, jlong arg1);
		static jlong parseId(android::net::Uri arg0);
		static android::net::Uri withAppendedId(android::net::Uri arg0, jlong arg1);
	};
} // namespace android::content

