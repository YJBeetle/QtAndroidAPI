#pragma once

#include "../../../JObject.hpp"

class JCharArray;
class JString;

namespace android::icu::text
{
	class Edits_Iterator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Edits_Iterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Edits_Iterator(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint destinationIndex() const;
		jint destinationIndexFromSourceIndex(jint arg0) const;
		jboolean findDestinationIndex(jint arg0) const;
		jboolean findSourceIndex(jint arg0) const;
		jboolean hasChange() const;
		jint newLength() const;
		jboolean next() const;
		jint oldLength() const;
		jint replacementIndex() const;
		jint sourceIndex() const;
		jint sourceIndexFromDestinationIndex(jint arg0) const;
		JString toString() const;
	};
} // namespace android::icu::text

