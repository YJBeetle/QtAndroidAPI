#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ContentUris : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentUris(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentUris(QJniObject obj);
		
		// Constructors
		ContentUris();
		
		// Methods
		static android::net::Uri_Builder appendId(android::net::Uri_Builder arg0, jlong arg1);
		static jlong parseId(android::net::Uri arg0);
		static android::net::Uri removeId(android::net::Uri arg0);
		static android::net::Uri withAppendedId(android::net::Uri arg0, jlong arg1);
	};
} // namespace android::content

