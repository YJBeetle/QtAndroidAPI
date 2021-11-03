#pragma once

#include "../../../JObject.hpp"


namespace android::view::inspector
{
	class WindowInspector : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInspector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInspector(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getGlobalWindowViews();
	};
} // namespace android::view::inspector

