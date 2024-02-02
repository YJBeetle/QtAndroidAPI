#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::adservices::topics
{
	class Topic : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Topic(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Topic(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Topic(jlong arg0, jlong arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getModelVersion() const;
		jlong getTaxonomyVersion() const;
		jint getTopicId() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::adservices::topics

