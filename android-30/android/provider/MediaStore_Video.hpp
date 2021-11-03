#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Video : public JObject
	{
	public:
		// Fields
		static JString DEFAULT_SORT_ORDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Video(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Video(QJniObject obj);
		
		// Constructors
		MediaStore_Video();
		
		// Methods
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2);
	};
} // namespace android::provider

