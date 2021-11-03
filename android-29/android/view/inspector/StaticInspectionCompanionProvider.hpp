#pragma once

#include "../../../JObject.hpp"

class JClass;

namespace android::view::inspector
{
	class StaticInspectionCompanionProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StaticInspectionCompanionProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StaticInspectionCompanionProvider(QJniObject obj);
		
		// Constructors
		StaticInspectionCompanionProvider();
		
		// Methods
		JObject provide(JClass arg0);
	};
} // namespace android::view::inspector

