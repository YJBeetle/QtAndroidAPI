#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace android::adservices::ondevicepersonalization
{
	class TrainingExamplesInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TrainingExamplesInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrainingExamplesInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPopulationName() const;
		JByteArray getResumptionToken() const;
		JString getTaskName() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

