#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebIconDatabase : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebIconDatabase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebIconDatabase(QJniObject obj);
		
		// Constructors
		WebIconDatabase();
		
		// Methods
		static android::webkit::WebIconDatabase getInstance();
		void close();
		void open(JString arg0);
		void releaseIconForPageUrl(JString arg0);
		void removeAllIcons();
		void requestIconForPageUrl(JString arg0, JObject arg1);
		void retainIconForPageUrl(JString arg0);
	};
} // namespace android::webkit

