#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebIconDatabase : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebIconDatabase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebIconDatabase(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebIconDatabase();
		
		// Methods
		static android::webkit::WebIconDatabase getInstance();
		void close() const;
		void open(JString arg0) const;
		void releaseIconForPageUrl(JString arg0) const;
		void removeAllIcons() const;
		void requestIconForPageUrl(JString arg0, JObject arg1) const;
		void retainIconForPageUrl(JString arg0) const;
	};
} // namespace android::webkit

