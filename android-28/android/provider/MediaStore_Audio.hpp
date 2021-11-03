#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class MediaStore_Audio : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio(QJniObject obj);
		
		// Constructors
		MediaStore_Audio();
		
		// Methods
		static JString keyFor(JString arg0);
	};
} // namespace android::provider

