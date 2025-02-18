#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::adservices::ondevicepersonalization
{
	class InferenceInput_Params : public JObject
	{
	public:
		// Fields
		static jint DELEGATE_CPU();
		static jint MODEL_TYPE_TENSORFLOW_LITE();
		
		// QJniObject forward
		template<typename ...Ts> explicit InferenceInput_Params(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InferenceInput_Params(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getDelegateType() const;
		JObject getKeyValueStore() const;
		JString getModelKey() const;
		jint getModelType() const;
		jint getRecommendedNumThreads() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

