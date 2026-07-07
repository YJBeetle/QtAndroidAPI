#pragma once

#include "../../../JObject.hpp"

class JFloatArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::appsearch
{
	class EmbeddingVector : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit EmbeddingVector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EmbeddingVector(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EmbeddingVector(JFloatArray arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getModelSignature() const;
		JFloatArray getValues() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

