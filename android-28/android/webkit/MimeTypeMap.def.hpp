#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class MimeTypeMap : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MimeTypeMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MimeTypeMap(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getFileExtensionFromUrl(JString arg0);
		static android::webkit::MimeTypeMap getSingleton();
		JString getExtensionFromMimeType(JString arg0) const;
		JString getMimeTypeFromExtension(JString arg0) const;
		jboolean hasExtension(JString arg0) const;
		jboolean hasMimeType(JString arg0) const;
	};
} // namespace android::webkit

