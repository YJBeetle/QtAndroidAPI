#pragma once

#include "../../JObject.hpp"


namespace android::content
{
	class QuickViewConstants : public JObject
	{
	public:
		// Fields
		static jstring FEATURE_DELETE();
		static jstring FEATURE_DOWNLOAD();
		static jstring FEATURE_EDIT();
		static jstring FEATURE_PRINT();
		static jstring FEATURE_SEND();
		static jstring FEATURE_VIEW();
		
		// QJniObject forward
		template<typename ...Ts> explicit QuickViewConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		QuickViewConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

