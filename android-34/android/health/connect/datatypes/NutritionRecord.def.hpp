#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Energy;
}
namespace android::health::connect::datatypes::units
{
	class Mass;
}
class JObject;
class JString;

namespace android::health::connect::datatypes
{
	class NutritionRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static android::health::connect::datatypes::AggregationType BIOTIN_TOTAL();
		static android::health::connect::datatypes::AggregationType CAFFEINE_TOTAL();
		static android::health::connect::datatypes::AggregationType CALCIUM_TOTAL();
		static android::health::connect::datatypes::AggregationType CHLORIDE_TOTAL();
		static android::health::connect::datatypes::AggregationType CHOLESTEROL_TOTAL();
		static android::health::connect::datatypes::AggregationType CHROMIUM_TOTAL();
		static android::health::connect::datatypes::AggregationType COPPER_TOTAL();
		static android::health::connect::datatypes::AggregationType DIETARY_FIBER_TOTAL();
		static android::health::connect::datatypes::AggregationType ENERGY_FROM_FAT_TOTAL();
		static android::health::connect::datatypes::AggregationType ENERGY_TOTAL();
		static android::health::connect::datatypes::AggregationType FOLATE_TOTAL();
		static android::health::connect::datatypes::AggregationType FOLIC_ACID_TOTAL();
		static android::health::connect::datatypes::AggregationType IODINE_TOTAL();
		static android::health::connect::datatypes::AggregationType IRON_TOTAL();
		static android::health::connect::datatypes::AggregationType MAGNESIUM_TOTAL();
		static android::health::connect::datatypes::AggregationType MANGANESE_TOTAL();
		static android::health::connect::datatypes::AggregationType MOLYBDENUM_TOTAL();
		static android::health::connect::datatypes::AggregationType MONOUNSATURATED_FAT_TOTAL();
		static android::health::connect::datatypes::AggregationType NIACIN_TOTAL();
		static android::health::connect::datatypes::AggregationType PANTOTHENIC_ACID_TOTAL();
		static android::health::connect::datatypes::AggregationType PHOSPHORUS_TOTAL();
		static android::health::connect::datatypes::AggregationType POLYUNSATURATED_FAT_TOTAL();
		static android::health::connect::datatypes::AggregationType POTASSIUM_TOTAL();
		static android::health::connect::datatypes::AggregationType PROTEIN_TOTAL();
		static android::health::connect::datatypes::AggregationType RIBOFLAVIN_TOTAL();
		static android::health::connect::datatypes::AggregationType SATURATED_FAT_TOTAL();
		static android::health::connect::datatypes::AggregationType SELENIUM_TOTAL();
		static android::health::connect::datatypes::AggregationType SODIUM_TOTAL();
		static android::health::connect::datatypes::AggregationType SUGAR_TOTAL();
		static android::health::connect::datatypes::AggregationType THIAMIN_TOTAL();
		static android::health::connect::datatypes::AggregationType TOTAL_CARBOHYDRATE_TOTAL();
		static android::health::connect::datatypes::AggregationType TOTAL_FAT_TOTAL();
		static android::health::connect::datatypes::AggregationType UNSATURATED_FAT_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_A_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_B12_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_B6_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_C_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_D_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_E_TOTAL();
		static android::health::connect::datatypes::AggregationType VITAMIN_K_TOTAL();
		static android::health::connect::datatypes::AggregationType ZINC_TOTAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit NutritionRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		NutritionRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Mass getBiotin() const;
		android::health::connect::datatypes::units::Mass getCaffeine() const;
		android::health::connect::datatypes::units::Mass getCalcium() const;
		android::health::connect::datatypes::units::Mass getChloride() const;
		android::health::connect::datatypes::units::Mass getCholesterol() const;
		android::health::connect::datatypes::units::Mass getChromium() const;
		android::health::connect::datatypes::units::Mass getCopper() const;
		android::health::connect::datatypes::units::Mass getDietaryFiber() const;
		android::health::connect::datatypes::units::Energy getEnergy() const;
		android::health::connect::datatypes::units::Energy getEnergyFromFat() const;
		android::health::connect::datatypes::units::Mass getFolate() const;
		android::health::connect::datatypes::units::Mass getFolicAcid() const;
		android::health::connect::datatypes::units::Mass getIodine() const;
		android::health::connect::datatypes::units::Mass getIron() const;
		android::health::connect::datatypes::units::Mass getMagnesium() const;
		android::health::connect::datatypes::units::Mass getManganese() const;
		JString getMealName() const;
		jint getMealType() const;
		android::health::connect::datatypes::units::Mass getMolybdenum() const;
		android::health::connect::datatypes::units::Mass getMonounsaturatedFat() const;
		android::health::connect::datatypes::units::Mass getNiacin() const;
		android::health::connect::datatypes::units::Mass getPantothenicAcid() const;
		android::health::connect::datatypes::units::Mass getPhosphorus() const;
		android::health::connect::datatypes::units::Mass getPolyunsaturatedFat() const;
		android::health::connect::datatypes::units::Mass getPotassium() const;
		android::health::connect::datatypes::units::Mass getProtein() const;
		android::health::connect::datatypes::units::Mass getRiboflavin() const;
		android::health::connect::datatypes::units::Mass getSaturatedFat() const;
		android::health::connect::datatypes::units::Mass getSelenium() const;
		android::health::connect::datatypes::units::Mass getSodium() const;
		android::health::connect::datatypes::units::Mass getSugar() const;
		android::health::connect::datatypes::units::Mass getThiamin() const;
		android::health::connect::datatypes::units::Mass getTotalCarbohydrate() const;
		android::health::connect::datatypes::units::Mass getTotalFat() const;
		android::health::connect::datatypes::units::Mass getTransFat() const;
		android::health::connect::datatypes::units::Mass getUnsaturatedFat() const;
		android::health::connect::datatypes::units::Mass getVitaminA() const;
		android::health::connect::datatypes::units::Mass getVitaminB12() const;
		android::health::connect::datatypes::units::Mass getVitaminB6() const;
		android::health::connect::datatypes::units::Mass getVitaminC() const;
		android::health::connect::datatypes::units::Mass getVitaminD() const;
		android::health::connect::datatypes::units::Mass getVitaminE() const;
		android::health::connect::datatypes::units::Mass getVitaminK() const;
		android::health::connect::datatypes::units::Mass getZinc() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

