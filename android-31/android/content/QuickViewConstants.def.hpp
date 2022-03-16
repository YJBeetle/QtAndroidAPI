#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::content
{
	class QuickViewConstants : public JObject
	{
	public:
		// Fields
		static JString FEATURE_DELETE();
		static JString FEATURE_DOWNLOAD();
		static JString FEATURE_EDIT();
		static JString FEATURE_PRINT();
		static JString FEATURE_SEND();
		static JString FEATURE_VIEW();
		
		// QJniObject forward
		template<typename ...Ts> explicit QuickViewConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QuickViewConstants(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

