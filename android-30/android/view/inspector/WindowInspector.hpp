#pragma once

#include "../../../JObject.hpp"


namespace android::view::inspector
{
	class WindowInspector : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInspector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInspector(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getGlobalWindowViews();
	};
} // namespace android::view::inspector

