#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class ArrayList;
}

namespace android::service::autofill
{
	class FieldClassification : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldClassification(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getMatches();
		jstring toString();
	};
} // namespace android::service::autofill

