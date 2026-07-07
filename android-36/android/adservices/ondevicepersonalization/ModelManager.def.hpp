#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class InferenceInput;
}

namespace android::adservices::ondevicepersonalization
{
	class ModelManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ModelManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ModelManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void run(android::adservices::ondevicepersonalization::InferenceInput arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::adservices::ondevicepersonalization

