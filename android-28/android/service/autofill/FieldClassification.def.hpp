#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::service::autofill
{
	class FieldClassification : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldClassification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getMatches() const;
		JString toString() const;
	};
} // namespace android::service::autofill

